/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

@interface NWCCompanionBaseDataSource : CLKCComplicationBundleDataSource {
    CLKComplicationTemplate * _template;
}

+ (id)appIdentifier;
+ (id)complicationLocalizationKey;
+ (id)localizedAppName;

- (void).cxx_destruct;
- (void)_localeDidChange:(id)arg1;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (id)sampleTemplate;

@end
