/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCHapticParameterCurve : NSObject {
    NSMutableArray * _curve;
}

@property (nonatomic, retain) NSMutableArray *curve;

- (void).cxx_destruct;
- (id)curve;
- (id)initWithHapticCommand:(const struct HapticCommand { struct MessageHeader { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; unsigned int x2; double x3; unsigned long long x4; unsigned long long x5; union u { struct TokenAndParams { unsigned long long x_1_2_1; struct ItemList<FixedParam, 8> { unsigned int x_2_3_1; struct FixedParam { unsigned int x_2_4_1; float x_2_4_2; } x_2_3_2[8]; } x_1_2_2; } x_6_1_1; struct SequenceChannelParam { unsigned long long x_2_2_1; unsigned long long x_2_2_2; float x_2_2_3; } x_6_1_2; struct SequenceParam { unsigned short x_3_2_1; float x_3_2_2; } x_6_1_3; float x_6_1_4; double x_6_1_5; struct ItemList<ParamPoint, 16> { unsigned int x_6_2_1; struct ParamPoint { float x_2_3_1; float x_2_3_2; } x_6_2_2[16]; } x_6_1_6; } x6; }*)arg1;
- (void)setCurve:(id)arg1;

@end
