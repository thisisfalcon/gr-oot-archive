/* -*- c++ -*- */
/*
 * Copyright 2016 <+YOU OR YOUR COMPANY+>.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_IGATE_CLOCK_RECOVERY_TIMER_BB_IMPL_H
#define INCLUDED_IGATE_CLOCK_RECOVERY_TIMER_BB_IMPL_H

#include <igate/clock_recovery_timer_bb.h>

namespace gr {
  namespace igate {

    class clock_recovery_timer_bb_impl : public clock_recovery_timer_bb
    {
     private:
       float d_samples_per_bit;
       float d_samples_since_change;
       int8_t d_last_bit;

     public:
      clock_recovery_timer_bb_impl(float samples_per_bit);
      ~clock_recovery_timer_bb_impl();

      // Where all the action really happens
      void forecast (int noutput_items, gr_vector_int &ninput_items_required);

      int general_work(int noutput_items,
           gr_vector_int &ninput_items,
           gr_vector_const_void_star &input_items,
           gr_vector_void_star &output_items);
    };

  } // namespace igate
} // namespace gr

#endif /* INCLUDED_IGATE_CLOCK_RECOVERY_TIMER_BB_IMPL_H */
