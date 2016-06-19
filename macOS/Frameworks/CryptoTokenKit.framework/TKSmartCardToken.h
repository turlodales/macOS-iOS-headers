//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CryptoTokenKit/TKToken.h>

@class NSData, TKSmartCard;

@interface TKSmartCardToken : TKToken
{
    NSData *_AID;
    TKSmartCard *_smartCard;
}

@property(readonly) TKSmartCard *smartCard; // @synthesize smartCard=_smartCard;
@property(readonly) NSData *AID; // @synthesize AID=_AID;
- (void).cxx_destruct;
- (id)initWithSmartCard:(id)arg1 AID:(id)arg2 instanceID:(id)arg3 tokenDriver:(id)arg4;

@end

