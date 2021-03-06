//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreFoundation/ISDataProvider.h>

#import <StoreFoundation/ISOperationDelegate-Protocol.h>

@class ISServiceProxy, NSArray, NSMutableArray, NSString;

@interface ISPropertyListProvider : ISDataProvider <ISOperationDelegate>
{
    BOOL _shouldProcessAccount;
    BOOL _shouldProcessDialogs;
    BOOL _shouldProcessDownloads;
    BOOL _shouldProcessProtocol;
    BOOL _shouldTriggerDownloads;
    BOOL _shouldRedirectOnGotoAction;
    BOOL _shouldProcessDownloadsForUpToDate;
    NSMutableArray *_upToDateDownloadItemIDs;
    BOOL _didProcessDialog;
    CDUnknownBlockType _actionHandler;
    CDUnknownBlockType _gotoActionHandler;
    NSString *_touchIDChallenge;
    ISServiceProxy *_serviceProxy;
}

- (void).cxx_destruct;
@property(readonly) ISServiceProxy *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(retain) NSString *touchIDChallenge; // @synthesize touchIDChallenge=_touchIDChallenge;
@property(copy) CDUnknownBlockType gotoActionHandler; // @synthesize gotoActionHandler=_gotoActionHandler;
@property(copy) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property BOOL shouldTriggerDownloads; // @synthesize shouldTriggerDownloads=_shouldTriggerDownloads;
@property(readonly) NSArray *upToDateDownloadItemIDs; // @synthesize upToDateDownloadItemIDs=_upToDateDownloadItemIDs;
@property BOOL shouldProcessDownloadsForUpToDate; // @synthesize shouldProcessDownloadsForUpToDate=_shouldProcessDownloadsForUpToDate;
@property BOOL shouldProcessDownloads; // @synthesize shouldProcessDownloads=_shouldProcessDownloads;
@property BOOL shouldProcessProtocol; // @synthesize shouldProcessProtocol=_shouldProcessProtocol;
@property(readonly) BOOL didProcessDialog; // @synthesize didProcessDialog=_didProcessDialog;
@property BOOL shouldProcessDialogs; // @synthesize shouldProcessDialogs=_shouldProcessDialogs;
@property BOOL shouldProcessAccount; // @synthesize shouldProcessAccount=_shouldProcessAccount;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (void)_processDownloads:(id)arg1 fallback:(id)arg2;
- (void)_processTriggerDownload:(id)arg1 fallback:(id)arg2;
- (BOOL)_processStoreVersion:(id)arg1 returningError:(id *)arg2;
- (void)_processPingsInDictionary:(id)arg1;
- (void)_processActions:(id)arg1 fallback:(id)arg2;
- (BOOL)parseData:(id)arg1 returningError:(id *)arg2;
- (BOOL)processPropertyList:(id)arg1 returningError:(id *)arg2;
- (BOOL)processDialogFromPropertyList:(id)arg1 returningError:(id *)arg2;
- (id)initWithStoreClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

