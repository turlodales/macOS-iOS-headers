//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolSmartCardSlotNotification-Protocol.h>

@class NSHashTable, TKSmartCardSlot;

__attribute__((visibility("hidden")))
@interface TKSmartCardSlotProxy : NSObject <TKProtocolSmartCardSlotNotification>
{
    TKSmartCardSlot *_slot;
    NSHashTable *_cards;
}

- (void).cxx_destruct;
@property(readonly) NSHashTable *cards; // @synthesize cards=_cards;
- (id)initWithSlot:(id)arg1;
- (void)cardSessionRequested;
- (void)notifyWithParameters:(id)arg1;

@end

