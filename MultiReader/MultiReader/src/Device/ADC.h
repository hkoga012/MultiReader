﻿/*!------------------------------------------------
@brief ADCクラスヘッダ
@note　
@author
-------------------------------------------------*/

#ifndef ADC_H
#define ADC_H

class ADC {
public:
    /*!------------------------------------------------
    @brief コンストラクタ
    -------------------------------------------------*/
    ADC();

    /*!------------------------------------------------
    @brief デストラクタ
    -------------------------------------------------*/
    ~ADC() = default;
    
    /*!------------------------------------------------
	@brief 初期化
	-------------------------------------------------*/
	TYPE_ERROR Init();

    /*!------------------------------------------------
    @brief 素のAD値を返す
    -------------------------------------------------*/
	uint16_t Read();

	/*!------------------------------------------------
    @brief AD値を有効範囲で変換してMAX値に対する割合を返す
	-------------------------------------------------*/
	uint8_t ReadRate(uint16_t minValue, uint16_t maxValue);

};
#endif

