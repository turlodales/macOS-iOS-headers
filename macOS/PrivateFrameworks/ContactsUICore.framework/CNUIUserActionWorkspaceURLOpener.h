//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionURLOpener-Protocol.h>

@class NSString, NSWorkspace;

@interface CNUIUserActionWorkspaceURLOpener : NSObject <CNUIUserActionURLOpener>
{
    NSWorkspace *_workspace;
}

+ (id)openConfigurationWithEndpoint:(id)arg1 isSensitive:(BOOL)arg2;
+ (id)urlCouldNotBeOpenedErrorWithURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSWorkspace *workspace; // @synthesize workspace=_workspace;
- (id)openURL:(id)arg1 isSensitive:(BOOL)arg2 connectionEndpoint:(id)arg3 withScheduler:(id)arg4;
- (id)openURL:(id)arg1 isSensitive:(BOOL)arg2 withScheduler:(id)arg3;
- (id)openURL:(id)arg1 withScheduler:(id)arg2;
- (id)initWithWorkspace:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

