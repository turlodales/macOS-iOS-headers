//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AMPLibraryAddToCloudMusicLibraryRequest, NSDictionary, NSString;

@protocol AMPLibraryClientProtocol
- (void)synchronousAddToCloudMusicLibrary:(AMPLibraryAddToCloudMusicLibraryRequest *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)synchronousRefreshSubscribedPlaylist:(unsigned long long)arg1 withCloudID:(unsigned long long)arg2 withReason:(unsigned char)arg3 withReply:(void (^)(NSError *))arg4;
- (void)synchronousCloudClientCommand:(unsigned int)arg1 withData:(unsigned long long)arg2 forClient:(unsigned int)arg3 withReply:(void (^)(NSError *))arg4;
- (void)cloudClientCommand:(unsigned int)arg1 withData:(unsigned long long)arg2 forClient:(unsigned int)arg3 withReply:(void (^)(NSError *))arg4;
- (void)sendDBChangesToLibrary:(NSDictionary *)arg1 fromRevision:(unsigned int)arg2 withReply:(void (^)(NSError *, unsigned int))arg3;
- (void)fetchLibraryChangesFromRevision:(unsigned int)arg1 withInitialLoad:(_Bool)arg2 withReply:(void (^)(NSError *, unsigned int, NSDictionary *))arg3;
- (void)closeDomainsForClientID:(unsigned int)arg1 withReply:(void (^)(NSError *))arg2;
- (void)openDomains:(unsigned long long)arg1 forClientID:(unsigned int)arg2 optionalParams:(NSDictionary *)arg3 withReply:(void (^)(NSError *, NSDictionary *, unsigned int, NSDictionary *))arg4;
- (void)getDomainInfo:(unsigned long long)arg1 forClientID:(unsigned int)arg2 optionalParams:(NSDictionary *)arg3 withReply:(void (^)(NSError *, NSDictionary *))arg4;
- (void)registerLibraryClient:(NSString *)arg1 withClientID:(unsigned int)arg2 withReply:(void (^)(NSError *, unsigned int, unsigned long long))arg3;
@end

