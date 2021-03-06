//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioResourceArbitration/aura_Control-Protocol.h>

@protocol aura_LevelControl <aura_Control>
@property(readonly, nonatomic) tuple_83a731a2 decibelRange;
@property(readonly, nonatomic) float decibelValue;
@property(readonly, nonatomic) float scalarValue;
- (float)convertDecibelsToScalar:(float)arg1;
- (float)convertScalarToDecibels:(float)arg1;
- (struct error_code)setDecibelValue:(float)arg1;
- (struct error_code)setScalarValue:(float)arg1;
@end

