//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SGTRecentsSuggesterReserved : NSObject
{
    NSMutableArray *recentSuggestions;
    NSMutableArray *recentSuggestionValues;
    NSObject<OS_dispatch_queue> *queue;
    long long searchID;
    NSString *saveName;
    long long maxRecents;
    NSUserDefaults *defaults;
    BOOL global;
    BOOL isSaving;
}

- (void).cxx_destruct;
- (void)dealloc;

@end

