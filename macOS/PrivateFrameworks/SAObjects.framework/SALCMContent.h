//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL;

@interface SALCMContent : SADomainObject
{
}

+ (id)contentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)content;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSURL *externalId;
@property(copy, nonatomic) NSString *channelId;
@property(copy, nonatomic) NSString *canonicalId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

