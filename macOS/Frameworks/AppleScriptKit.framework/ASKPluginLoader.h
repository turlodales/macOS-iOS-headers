//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSBundle;

@interface ASKPluginLoader : NSObject
{
    NSBundle *_pluginBundle;
    NSArray *_topLevelObjects;
}

- (void)load:(id)arg1;
- (void)dealloc;
- (id)initWithPluginBundle:(id)arg1;

@end

