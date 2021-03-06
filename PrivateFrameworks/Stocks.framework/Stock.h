/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class Exchange, NSString, NSURL, StockChartData, StockDataSource;

@interface Stock : NSObject {
    NSString *_averageVolume;
    NSString *_change;
    StockChartData *_chartDataArray[9];
    NSString *_companyName;
    StockDataSource *_dataSource;
    NSString *_dividendYield;
    Exchange *_exchange;
    NSString *_high;
    NSURL *_infoURL;
    NSString *_low;
    NSString *_marketcap;
    NSString *_open;
    NSString *_peRatio;
    NSString *_price;
    unsigned int _pricePrecision;
    NSString *_shortCompanyName;
    NSString *_symbol;
    NSString *_symbolType;
    double _timeMetadataLastUpdated;
    double _timeQuoteLastUpdated;
    NSString *_volume;
    NSString *_yearHigh;
    NSString *_yearLow;
}

@property(retain) NSString * averageVolume;
@property(retain) NSString * change;
@property(retain) NSString * companyName;
@property(retain) StockDataSource * dataSource;
@property(retain) NSString * dividendYield;
@property(retain) Exchange * exchange;
@property(retain) NSString * high;
@property(retain) NSURL * infoURL;
@property(retain) NSString * low;
@property(retain) NSString * marketcap;
@property(retain) NSString * open;
@property(retain) NSString * peRatio;
@property(retain) NSString * price;
@property(readonly) unsigned int pricePrecision;
@property(retain) NSString * shortCompanyName;
@property(retain) NSString * symbol;
@property(retain) NSString * symbolType;
@property double timeMetadataLastUpdated;
@property double timeQuoteLastUpdated;
@property(retain) NSString * volume;
@property(retain) NSString * yearHigh;
@property(retain) NSString * yearLow;

+ (id)BlankValueString;
+ (id)PercentFormatter;
+ (id)_formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4;
+ (id)_potentiallyAbsentKeys;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4 droppingFractionDigitsIfLengthExceeds:(unsigned int)arg5;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3;
+ (id)formattedStringForString:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 droppingFractionDigitsIfLengthExceeds:(unsigned int)arg4;
+ (id)formattedStringForString:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3;
+ (BOOL)localeUsesASCIIDigits;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 fractionDigits:(unsigned int)arg2;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1;
+ (id)percentSymbol;
+ (id)postfixCharacterForMagnitude:(unsigned int)arg1 unitMagnitude:(unsigned int*)arg2;
+ (void)resetLocale;
+ (id)urlForStock:(id)arg1;
+ (id)urlForStockSymbol:(id)arg1;

- (void).cxx_destruct;
- (double)_updateInterval;
- (void)_updatePricePrecision;
- (id)archiveDictionary;
- (id)averageVolume;
- (id)change;
- (BOOL)changeIsNegative;
- (BOOL)changeIsZero;
- (id)chartDataForInterval:(int)arg1;
- (id)companyName;
- (id)dataSource;
- (void)dealloc;
- (id)description;
- (id)dividendYield;
- (BOOL)doesMetadataNeedUpdate;
- (BOOL)doesQuoteNeedUpdate;
- (id)exchange;
- (id)formattedChangePercent:(BOOL)arg1 includePercentSign:(BOOL)arg2;
- (id)formattedChangePercent:(BOOL)arg1;
- (id)formattedPrice;
- (unsigned int)hash;
- (id)high;
- (id)infoURL;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIndex;
- (BOOL)isMetadataStale;
- (BOOL)isQuoteStale;
- (id)listName;
- (id)listNameWithMaxIndexNameLength:(unsigned int)arg1;
- (id)low;
- (BOOL)marketIsOpen;
- (id)marketcap;
- (id)open;
- (id)peRatio;
- (void)populateFromDictionary:(id)arg1;
- (id)price;
- (unsigned int)pricePrecision;
- (void)resetLocale;
- (void)setAverageVolume:(id)arg1;
- (void)setChange:(id)arg1;
- (void)setChartData:(id)arg1 forInterval:(int)arg2;
- (void)setCompanyName:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDividendYield:(id)arg1;
- (void)setExchange:(id)arg1;
- (void)setHigh:(id)arg1;
- (void)setInfoURL:(id)arg1;
- (void)setLow:(id)arg1;
- (void)setMarketcap:(id)arg1;
- (void)setOpen:(id)arg1;
- (void)setPeRatio:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setShortCompanyName:(id)arg1;
- (void)setSymbol:(id)arg1;
- (void)setSymbolType:(id)arg1;
- (void)setTimeMetadataLastUpdated:(double)arg1;
- (void)setTimeQuoteLastUpdated:(double)arg1;
- (void)setVolume:(id)arg1;
- (void)setYearHigh:(id)arg1;
- (void)setYearLow:(id)arg1;
- (id)shortCompanyName;
- (id)symbol;
- (id)symbolType;
- (double)timeMetadataLastUpdated;
- (double)timeQuoteLastUpdated;
- (void)updateMetadataWithDictionary:(id)arg1 forTime:(double)arg2;
- (void)updateQuoteWithDictionary:(id)arg1 forTime:(double)arg2;
- (id)volume;
- (id)yearHigh;
- (id)yearLow;

@end
