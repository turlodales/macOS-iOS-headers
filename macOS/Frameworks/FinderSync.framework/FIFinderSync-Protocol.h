//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSImage, NSMenu, NSString, NSURL, NSXPCListenerEndpoint;

@protocol FIFinderSync

@optional
@property(readonly, copy) NSString *toolbarItemToolTip;
@property(readonly, copy) NSImage *toolbarItemImage;
@property(readonly, copy) NSString *toolbarItemName;
- (void)valuesForAttributes:(NSArray *)arg1 forItemWithURL:(NSURL *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (NSXPCListenerEndpoint *)makeListenerEndpointForServiceName:(NSString *)arg1 itemURL:(NSURL *)arg2 andReturnError:(id *)arg3;
- (NSArray *)supportedServiceNamesForItemWithURL:(NSURL *)arg1;
- (void)requestBadgeIdentifierForURL:(NSURL *)arg1;
- (void)endObservingDirectoryAtURL:(NSURL *)arg1;
- (void)beginObservingDirectoryAtURL:(NSURL *)arg1;
- (NSMenu *)menuForMenuKind:(unsigned long long)arg1;
@end

