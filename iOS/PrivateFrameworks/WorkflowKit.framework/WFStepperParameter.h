/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFStepperParameter : WFParameter {
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    NSString * _pluralNoun;
    NSString * _singularNoun;
}

@property (nonatomic, readonly, copy) NSString *localizedLabelFormatString;
@property (nonatomic, readonly) NSNumber *maximumValue;
@property (nonatomic, readonly) NSNumber *minimumValue;
@property (nonatomic, readonly, copy) NSString *pluralNoun;
@property (nonatomic, readonly, copy) NSString *singularNoun;

- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabel;
- (id)localizedLabelFormatString;
- (id)localizedLabelWithState:(id)arg1 includingPrefix:(bool)arg2;
- (id)maximumValue;
- (id)minimumValue;
- (id)pluralNoun;
- (Class)singleStateClass;
- (id)singularNoun;

@end
