//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class NSArray, NSString;

@interface EWSPhysicalAddressDictionaryType : NSObject <XSDefinitionProvider>
{
    NSArray *_Entry;
}

+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *Entry; // @synthesize Entry=_Entry;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

