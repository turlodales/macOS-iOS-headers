//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSavePanelCustomAction;

__attribute__((visibility("hidden")))
@interface _NSSavePanel_CustomActionContext : NSObject
{
    NSSavePanelCustomAction *action;
    NSArray *urlsToActOn;
}

- (void).cxx_destruct;
@property(retain) NSArray *urlsToActOn; // @synthesize urlsToActOn;
@property __weak NSSavePanelCustomAction *action; // @synthesize action;
- (void)dealloc;

@end

