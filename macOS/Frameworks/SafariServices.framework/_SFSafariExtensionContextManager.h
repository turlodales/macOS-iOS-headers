//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSExtensionContext;

__attribute__((visibility("hidden")))
@interface _SFSafariExtensionContextManager : NSObject
{
    NSExtensionContext *_mostRecentContext;
}

+ (id)sharedManager;
@property(nonatomic) __weak NSExtensionContext *mostRecentContext; // @synthesize mostRecentContext=_mostRecentContext;
- (void).cxx_destruct;

@end

