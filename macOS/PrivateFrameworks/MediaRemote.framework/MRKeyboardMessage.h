//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRTextEditingAttributes, NSData;

@interface MRKeyboardMessage : MRProtocolMessage
{
    MRTextEditingAttributes *_attributes;
}

+ (id)encryptedMessageWithState:(unsigned long long)arg1 text:(id)arg2 attributes:(id)arg3 usingCryptoSession:(id)arg4;
- (void).cxx_destruct;
- (id)decryptedTextUsingCryptoSession:(id)arg1;
- (unsigned long long)type;
@property(readonly, nonatomic) MRTextEditingAttributes *attributes;
@property(readonly, nonatomic) NSData *encryptedTextCyphertext;
@property(readonly, nonatomic) unsigned long long state;
- (id)initWithState:(unsigned long long)arg1 encryptedTextCyphertext:(id)arg2 attributes:(id)arg3;

@end

