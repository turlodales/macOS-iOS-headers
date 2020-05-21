//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRSCardRequest;

@interface CRKCardPresentationConfiguration : NSObject
{
    BOOL _respectsUserConsent;
    BOOL _loadsBundleProviders;
    CRSCardRequest *_cardRequest;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL loadsBundleProviders; // @synthesize loadsBundleProviders=_loadsBundleProviders;
@property(nonatomic) BOOL respectsUserConsent; // @synthesize respectsUserConsent=_respectsUserConsent;
@property(readonly, nonatomic) CRSCardRequest *cardRequest; // @synthesize cardRequest=_cardRequest;
@property(readonly, nonatomic) id <CRContent> content;
- (id)initWithCardRequest:(id)arg1;
- (id)initWithContent:(id)arg1;
- (id)initWithCard:(id)arg1;

@end

