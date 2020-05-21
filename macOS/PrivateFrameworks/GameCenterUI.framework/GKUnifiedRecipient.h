//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, NSString;

@interface GKUnifiedRecipient : NSObject
{
    NSString *_fullName;
    NSString *_handle;
    NSString *_nickName;
    NSString *_label;
    CNContact *_contact;
}

+ (id)handleForContact:(id)arg1;
+ (id)recipientForContact:(id)arg1;
+ (id)recipientForHandle:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (id)displayName;

@end

