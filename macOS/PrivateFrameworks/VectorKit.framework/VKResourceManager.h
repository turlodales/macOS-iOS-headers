//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle;

@interface VKResourceManager : NSObject
{
    NSBundle *_vkBundle;
}

- (BOOL)isDevResourceWithName:(id)arg1;
- (id)pathForResourceWithName:(id)arg1;
- (id)dataForResourceWithName:(id)arg1;
- (id)_localNameForResourceName:(id)arg1;
- (void)dealloc;
- (id)init;

@end

