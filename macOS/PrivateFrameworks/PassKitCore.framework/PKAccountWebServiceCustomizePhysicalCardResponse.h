//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServiceCustomizePhysicalCardResponse : PKAccountWebServiceResponse
{
    NSArray *_artworkOptions;
    NSArray *_nameOptions;
    NSArray *_priceOptions;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *priceOptions; // @synthesize priceOptions=_priceOptions;
@property(readonly, copy, nonatomic) NSArray *nameOptions; // @synthesize nameOptions=_nameOptions;
@property(readonly, copy, nonatomic) NSArray *artworkOptions; // @synthesize artworkOptions=_artworkOptions;
- (id)initWithData:(id)arg1;

@end

