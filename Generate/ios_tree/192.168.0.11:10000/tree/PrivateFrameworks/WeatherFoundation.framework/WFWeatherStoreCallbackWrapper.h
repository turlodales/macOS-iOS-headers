/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFWeatherStoreCallbackWrapper : NSObject {
    id /* block */  _aqiScaleRetrievalCompletionBlock;
    bool  _executedCompletionBlock;
    id /* block */  _forecastRetrievalCompletionBlock;
    unsigned long long  _requestType;
}

@property (nonatomic, copy) id /* block */ aqiScaleRetrievalCompletionBlock;
@property (nonatomic, readonly) bool executedCompletionBlock;
@property (nonatomic, copy) id /* block */ forecastRetrievalCompletionBlock;
@property (nonatomic) unsigned long long requestType;

- (void).cxx_destruct;
- (id /* block */)aqiScaleRetrievalCompletionBlock;
- (void)executeCallbackwithResponse:(id)arg1 error:(id)arg2;
- (bool)executedCompletionBlock;
- (id /* block */)forecastRetrievalCompletionBlock;
- (id)initWithAQIScaleRetrievalBlock:(id /* block */)arg1;
- (id)initWithForecastRetrievalBlock:(id /* block */)arg1;
- (unsigned long long)requestType;
- (void)setAqiScaleRetrievalCompletionBlock:(id /* block */)arg1;
- (void)setForecastRetrievalCompletionBlock:(id /* block */)arg1;
- (void)setRequestType:(unsigned long long)arg1;

@end
