//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class AKAppleIDServerResourceLoadDelegate, NSArray, NSURLRequest;

@interface AKServerRequestConfiguration : NSObject <NSSecureCoding>
{
    NSURLRequest *_request;
    AKAppleIDServerResourceLoadDelegate *_resourceLoadDelegate;
    unsigned long long _requestType;
    unsigned long long _presentationType;
    NSArray *_whitelistedPathURLs;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *whitelistedPathURLs; // @synthesize whitelistedPathURLs=_whitelistedPathURLs;
@property(nonatomic) unsigned long long presentationType; // @synthesize presentationType=_presentationType;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) AKAppleIDServerResourceLoadDelegate *resourceLoadDelegate; // @synthesize resourceLoadDelegate=_resourceLoadDelegate;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (id)description;
- (id)initWithRequest:(id)arg1 requestType:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

