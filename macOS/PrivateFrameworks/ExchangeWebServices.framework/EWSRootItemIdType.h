//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseItemIdType.h>

#import "XSDefinitionProvider.h"

@class NSString;

@interface EWSRootItemIdType : EWSBaseItemIdType <XSDefinitionProvider>
{
    NSString *_RootItemId;
    NSString *_RootItemChangeKey;
}

+ (BOOL)supportsSecureCoding;
+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *RootItemChangeKey; // @synthesize RootItemChangeKey=_RootItemChangeKey;
@property(copy, nonatomic) NSString *RootItemId; // @synthesize RootItemId=_RootItemId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

