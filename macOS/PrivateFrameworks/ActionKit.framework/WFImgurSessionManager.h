//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"

@class NSMapTable, NSString, NSURL, NSURLSession, WFOAuth2Credential;

@interface WFImgurSessionManager : NSObject <NSURLSessionDataDelegate>
{
    NSString *_clientID;
    WFOAuth2Credential *_credential;
    NSURL *_baseURL;
    NSURLSession *_session;
    NSMapTable *_progressTable;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *progressTable; // @synthesize progressTable=_progressTable;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) WFOAuth2Credential *credential; // @synthesize credential=_credential;
@property(readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)sendRequest:(id)arg1 progress:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAlbumLinkFromID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createAlbumWithIDs:(id)arg1 title:(id)arg2 description:(id)arg3 layout:(id)arg4 privacy:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)uploadImage:(id)arg1 title:(id)arg2 description:(id)arg3 progress:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithClientID:(id)arg1 configuration:(id)arg2;
- (id)initWithClientID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

