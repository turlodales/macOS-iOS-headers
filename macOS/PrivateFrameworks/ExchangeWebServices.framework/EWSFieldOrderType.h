//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class EWSBasePathToElementType, NSString;

@interface EWSFieldOrderType : NSObject <XSDefinitionProvider>
{
    EWSBasePathToElementType *_Path;
    long long _Order;
}

+ (id)definition;
- (void).cxx_destruct;
@property(nonatomic) long long Order; // @synthesize Order=_Order;
@property(retain, nonatomic) EWSBasePathToElementType *Path; // @synthesize Path=_Path;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

