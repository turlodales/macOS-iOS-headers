//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKController;

@interface AKActionController : NSObject
{
    AKController *_controller;
}

- (void).cxx_destruct;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateSender:(id)arg1 segment:(long long)arg2;
- (BOOL)validateSender:(id)arg1;
- (BOOL)_isSenderEnabled:(id)arg1 segment:(long long)arg2;
- (BOOL)isSenderEnabled:(id)arg1;
- (void)performActionForSender:(id)arg1 segment:(long long)arg2;
- (void)performActionForSender:(id)arg1;
- (id)initWithController:(id)arg1;

@end

