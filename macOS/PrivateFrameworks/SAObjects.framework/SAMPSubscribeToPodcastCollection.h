//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString, SAMPPodcastCollection;

@interface SAMPSubscribeToPodcastCollection : SADomainCommand
{
}

+ (id)subscribeToPodcastCollectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)subscribeToPodcastCollection;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAMPPodcastCollection *podcastCollection;
@property(copy, nonatomic) NSString *hashedRouteUID;
@property(copy, nonatomic) NSString *assetInfo;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

