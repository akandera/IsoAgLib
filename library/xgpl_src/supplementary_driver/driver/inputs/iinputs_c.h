/*
  iinputs_c.h - header for the inputs management object

  (C) Copyright 2009 - 2012 by OSB AG and developing partners

  See the repository-log for details on the authors and file-history.
  (Repository information can be found at <http://isoaglib.com/download>)

  Use, modification and distribution are subject to the GNU General
  Public License with exceptions for ISOAgLib. (See accompanying
  file LICENSE.txt or copy at <http://isoaglib.com/download/license>)
*/
#ifndef IINPUTS_C_H
#define IINPUTS_C_H

#include "impl/inputs_c.h"
#include "ianalogi_c.h"
#include "idigitali_c.h"
#include "icounteri_c.h"


namespace IsoAgLib {

/**
  Hardware dependent object for hardware independent getting of input data;
  @see iAnalogI_c
  @see iDigitalI_c
  @see iCounterI_c
  @author Dipl.-Inform. Achim Spangler
  */
class iInputs_c : private __IsoAgLib::Inputs_c
{
public:
  /**
    initialisation for the sensor input management which sets the allowed number
    ranges for analog, digital, counter input channels.
    @param ab_digitalFirst smallest allowed digital input channel number (DIGITAL_INPUT_MIN)
    @param ab_digitalLast greatest allowed digital input channel number (DIGITAL_INPUT_MAX)
    @param ab_analogFirst smallest allowed analog input channel number (ANALOG_INPUT_MIN)
    @param ab_analogLast greatest allowed analog input channel number (ANALOG_INPUT_MAX)
    @param ab_counterFirst smallest allowed counter input channel number (COUNTER_INPUT_MIN)
    @param ab_counterLast greatest allowed counter input channel number (COUNTER_INPUT_MAX)
    @see masterHeader
  */
  void init(uint8_t ab_digitalFirst = DIGITAL_INPUT_MIN, uint8_t ab_digitalLast = DIGITAL_INPUT_MIN,
            uint8_t ab_analogFirst = ANALOG_INPUT_MIN, uint8_t ab_analogLast = ANALOG_INPUT_MAX,
           uint8_t ab_counterFirst = COUNTER_INPUT_MIN, uint8_t ab_counterLast = COUNTER_INPUT_MAX)
  { Inputs_c::init(ab_digitalFirst, ab_digitalLast, ab_analogFirst, ab_analogLast,ab_counterFirst, ab_counterLast); }

  /** close sub-system */
  void close() {}

  /** destructor for the sensor input manager object */
  ~iInputs_c() {}

  /**
    set the limits for digital input channels (first setting can be done by constructor parameters)
    @param ab_digitalFirst number of the smallest allowed digital input channel
    @param ab_digitalLast number of the greatest allowed digital input channel
  */
  void setDigitalLimits(uint8_t ab_digitalFirst, uint8_t ab_digitalLast)
    { Inputs_c::setDigitalLimits(ab_digitalFirst, ab_digitalLast); }

  /**
    set the limits for analog input channels (first setting can be done by constructor parameters)
    @param ab_analogFirst number of the smallest allowed analog input channel
    @param ab_analogLast number of the greatest allowed analog input channel
  */
  void setAnalogLimits(uint8_t ab_analogFirst, uint8_t ab_analogLast)
    { Inputs_c::setAnalogLimits(ab_analogFirst, ab_analogLast); }

  /**
    set the limits for counter input channels (first setting can be done by constructor parameters)
    @param ab_counterFirst number of the smallest allowed counter input channel
    @param ab_counterLast number of the greatest allowed counter input channel
  */
  void setCounterLimits(uint8_t ab_counterFirst, uint8_t ab_counterLast)
    { Inputs_c::setCounterLimits(ab_counterFirst, ab_counterLast); }

  /**
    check if digital input object to given ab_channel exist
    @param ab_channel number of the tested input channel
    @return true -> searched input object exist
  */
  bool existDigital(uint8_t ab_channel) {return Inputs_c::existDigital(ab_channel); }

  /**
    check if analog input object to given ab_channel exist
    @param ab_channel number of the tested input channel
    @return true -> searched input object exist
  */
  bool existAnalog(uint8_t ab_channel) {return Inputs_c::existAnalog(ab_channel); }

  /**
    check if counter input object to given ab_channel exist
    @param ab_channel number of the tested input channel
    @return true -> searched input object exist
  */
  bool existCounter(uint8_t ab_channel) {return Inputs_c::existCounter(ab_channel); }

  /**
    deliver reference to requested analog channel object to access this sensor input;
    IMPORTANT: an analog input channel object with the wanted number  must exist
               -> creating with createAnalog and checking with existAnalog
               (throw exception if exceptions are activated on compile time)
    @param ab_channel channel of the analog sensor input
    @return reference to the wanted analog sensor input channel
  */
  iAnalogI_c& analog(uint8_t ab_channel) {return (iAnalogI_c&)(Inputs_c::analog(ab_channel)); }

  /**
    deliver reference to requested digital channel object to access this sensor input;
    IMPORTANT: an digital input channel object with the wanted number must exist
               -> creating with createDigital and checking with existDigital
               (throw exception if exceptions are activated on compile time)
    @param ab_channel channel of the digital sensor input
    @return reference to the wanted digital sensor input channel
    @exception containerElementNonexistant
  */
  iDigitalI_c& digital(uint8_t ab_channel) {return (iDigitalI_c&)(Inputs_c::digital(ab_channel)); }

  /**
    deliver reference to requested counter channel object to access this sensor input;
    IMPORTANT: an counter input channel object with the wanted number  must exist
               -> creating with createCounter and checking with existCounter
               (throw exception if exceptions are activated on compile time)
    @param ab_channel channel of the counter sensor input
    @return reference to the wanted counter sensor input channel
    @exception containerElementNonexistant
  */
  iCounterI_c& counter(uint8_t ab_channel) {return (iCounterI_c&)(Inputs_c::counter(ab_channel)); }

private:
  /** allow getIinputsInstance() access to shielded base class.
      otherwise __IsoAgLib::getIinputsInstance() wouldn't be accepted by compiler
    */
  friend iInputs_c& getIinputsInstance( void );
};

/** C-style function, to get access to the unique iInputs_c singleton instance */
inline iInputs_c& getIinputsInstance( void ) { return static_cast<iInputs_c&>(__IsoAgLib::getInputsInstance()); }

} // IsoAgLib

#endif
