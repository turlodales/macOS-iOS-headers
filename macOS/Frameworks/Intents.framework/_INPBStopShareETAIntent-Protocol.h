//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBContact, _INPBIntentMetadata;

@protocol _INPBStopShareETAIntent <NSObject>
+ (Class)recipientType;
@property(readonly, nonatomic) unsigned long long recipientsCount;
@property(copy, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
- (_INPBContact *)recipientAtIndex:(unsigned long long)arg1;
- (void)addRecipient:(_INPBContact *)arg1;
- (void)clearRecipients;
@end

