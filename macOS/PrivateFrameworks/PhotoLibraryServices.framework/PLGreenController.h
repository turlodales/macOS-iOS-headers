//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface PLGreenController : NSObject
{
    NSDictionary *_currentGreenValues;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *currentGreenValues; // @synthesize currentGreenValues=_currentGreenValues;
- (BOOL)greenValuesSimilarToGreenValues:(id)arg1;
- (BOOL)isGreenStateValid;
- (void)readValuesFromDisk;
- (id)init;

@end

