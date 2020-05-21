//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CFCommandProcessing.h"

@class CFCommandQueuer, CFServiceHelper, NSString;

@interface CFCommandProcessor : NSObject <CFCommandProcessing>
{
    CFServiceHelper *_serviceHelper;
    CFCommandQueuer *_commandQueuer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CFCommandQueuer *commandQueuer; // @synthesize commandQueuer=_commandQueuer;
@property(retain, nonatomic) CFServiceHelper *serviceHelper; // @synthesize serviceHelper=_serviceHelper;
- (id)initWithServiceHelper:(id)arg1 commandQueuer:(id)arg2;
- (void)isDeviceLockedWithPasscodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handleOneWayCommand:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

