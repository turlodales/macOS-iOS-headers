//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMDelayedUpdaterInfo : NSObject
{
    id _updater;
    SEL _selector;
    id _argument;
}

- (void).cxx_destruct;
@property(readonly) id argument; // @synthesize argument=_argument;
@property(readonly) SEL selector; // @synthesize selector=_selector;
@property(readonly) id updater; // @synthesize updater=_updater;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithUpdater:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

@end

