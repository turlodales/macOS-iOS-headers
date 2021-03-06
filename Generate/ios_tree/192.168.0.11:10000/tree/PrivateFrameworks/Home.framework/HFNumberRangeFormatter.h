/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFNumberRangeFormatter : NSFormatter {
    bool  _consolidatesUnit;
    NSFormatter * _numberFormatter;
}

@property (nonatomic) bool consolidatesUnit;
@property (nonatomic, retain) NSFormatter *numberFormatter;

- (void).cxx_destruct;
- (bool)_isRTL;
- (bool)_shouldRemoveUnitFromMaximumFormattedValue:(id)arg1;
- (bool)_shouldRemoveUnitFromMinimumFormattedValue:(id)arg1;
- (bool)consolidatesUnit;
- (id)initWithNumberFormatter:(id)arg1;
- (id)numberFormatter;
- (void)setConsolidatesUnit:(bool)arg1;
- (void)setNumberFormatter:(id)arg1;
- (id)stringForNumberRange:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
