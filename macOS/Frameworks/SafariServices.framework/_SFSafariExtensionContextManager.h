//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtensionContext, NSMapTable;

__attribute__((visibility("hidden")))
@interface _SFSafariExtensionContextManager : NSObject
{
    NSMapTable *_contexts;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSExtensionContext *mostRecentContext;
- (void)addContext:(id)arg1;
- (id)init;

@end

