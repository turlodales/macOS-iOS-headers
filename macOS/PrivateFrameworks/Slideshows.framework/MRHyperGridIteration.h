//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRHyperGridIteration : NSObject
{
    unsigned char layout;
    unsigned char slideCount;
    unsigned char slideIndex[3];
    long long direction;
    long long index;
    double duration;
    long long panoCount;
    double panoDurations[3];
    double startTime;
    BOOL hasBreak;
}

+ (CDStruct_7b508128 *)poolInfo;
- (id)description;
- (void)setLayout:(unsigned char)arg1;

@end

