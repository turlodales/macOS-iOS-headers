//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class NSDateComponents, NSString;

@interface EWSDeletedOccurrenceInfoType : NSObject <XSDefinitionProvider>
{
    NSDateComponents *_Start;
}

+ (id)definition;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDateComponents *Start; // @synthesize Start=_Start;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

