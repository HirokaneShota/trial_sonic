/* ------------------------------------------------------------------------- */
/* SonicSensor.cpp														 */
/* ?????g?Z???T???��????cm?P???��????									 */
/* ?V???O???g?????`														 */
/* ------------------------------------------------------------------------- */
/* ???	?X?V????								???t		   ????			 */
/* ------------------------------------------------------------------------- */
/* 000000	?V?K??							2022/07/14     ?????@?C??	 */
/* ------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------- */
/* Include																	 */
/* ------------------------------------------------------------------------- */
#include "SonicSensor.h"
/* ------------------------------------------------------------------------- */
/* ?????	: SonicSensor::SonicSensor							 */
/* ?@?\??	: ?R???X?g???N?^												 */
/* ?@?\?T?v	: ?C???X?^???X???? getInstance() ??s???A??????????????S??	 */
/* ????		: ???															 */
/* ???l	: void															 */
/* ????	: 2022/07/14		????  ?C??		?V?K??					 */
/* ------------------------------------------------------------------------- */
SonicSensor::SonicSensor(void){}
/* ------------------------------------------------------------------------- */
/* ?????	: SonicSensor::~SonicSensor							 */
/* ?@?\??	: ?f?X?g???N?^													 */
/* ?@?\?T?v	: DM?J????C???X?^???X??|?C???^?[NULL????S??					 */
/* ????		: ???															 */
/* ???l	: void															 */
/* ????	: 2022/07/14		????  ?C??		?V?K??					 */
/* ------------------------------------------------------------------------- */
SonicSensor::~SonicSensor(void){}

/* ------------------------------------------------------------------------- */
/* ?????	: SonicSensor::inti										 */
/* ?@?\??	: ?Z???T??port?????????										 */
/* ?@?\?T?v	: ?Z???T???????(?|?[?g???)???s??								 */
/* ????		: ???															 */
/* ???l	: int8_t				:SYS_OK			:????I??				 */
/*			: int8_t				:SYS_NG			:???I??				 */
/* ????	: 2022/07/14		????  ?C??		?V?K??					 */
/* ------------------------------------------------------------------------- */
int8_t SonicSensor::inti( void ){

	
	ER errorCheck = NULL;						/* ?G???[?`?F?b?N???		 */

	/* ?G???[?`?F?b?N */
	errorCheck = ev3_sensor_config( static_cast<sensor_port_t>(SENSOR_SONAR) ,ULTRASONIC_SENSOR );

	/* ??????OK?A?????NG???? */
	if( errorCheck != E_OK ){
		printf( "?????g?Z???T??port???????????????\n" );
		return SYS_NG;
	}
	return SYS_OK;
}

/* ------------------------------------------------------------------------- */
/* ?????	: SonicSensor::getDistance									 */
/* ?@?\??	: ??Q??????????CM?P???��????								 */
/* ?@?\?T?v	: API????��o????????????��									 */
/* ????		: ???															 */
/* ???l	: int16_t			:distance			:????(cm?P??)			 */
/* ????	: 2022/07/14		????  ?C??		?V?K??					 */
/* ------------------------------------------------------------------------- */
uint16_t SonicSensor::getDistance( void ) {

	uint16_t distance;							/* ???????					 */

	/* ??????�� */
	distance = ev3_ultrasonic_sensor_get_distance(static_cast<sensor_port_t>(SENSOR_SONAR));

	printf("%d\n",distance);

	/* ???????? */
	return distance;
}