//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SASource : SADomainObject
{
}

+ (id)sourceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)source;
@property(copy, nonatomic) NSNumber *remote;
@property(copy, nonatomic) NSString *domainIdentifier;
@property(copy, nonatomic) NSString *accountName;
@property(copy, nonatomic) NSString *accountIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

