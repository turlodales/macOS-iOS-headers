//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OCXSStream : NSObject
{
    NSMutableArray *mLevelStack;
}

- (void).cxx_destruct;
- (BOOL)hasLevels;
- (BOOL)popLevel;
- (void)pushLevel:(int)arg1 name:(const char *)arg2;
- (int)currentContextChildDepth;
- (int)currentContextDepth;
- (id)init;

@end

