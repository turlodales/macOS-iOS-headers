//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INDateComponentsRange, INPerson, NSNumber;

@protocol INSearchCallHistoryIntentExport <NSObject, JSExport>
@property(copy) NSNumber *unseen;
@property long long preferredCallProvider;
@property unsigned long long callTypes;
@property unsigned long long callCapabilities;
@property(copy) INPerson *recipient;
@property(copy) INDateComponentsRange *dateCreated;
- (id)init;
@end

