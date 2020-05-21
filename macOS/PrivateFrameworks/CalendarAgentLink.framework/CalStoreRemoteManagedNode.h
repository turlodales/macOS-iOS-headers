//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarAgentLink/CalStoreRemoteManagedObject.h>

@class NSString, NSURL;

@interface CalStoreRemoteManagedNode : CalStoreRemoteManagedObject
{
    NSString *_color;
    BOOL _isWritable;
    NSString *_notes;
    NSURL *_objectURI;
    int _order;
    NSString *_title;
    NSString *_type;
    NSString *_uid;
}

+ (BOOL)supportsSecureCoding;
+ (id)hexValueForColor:(id)arg1;
+ (id)colorFromHexString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int order; // @synthesize order=_order;
@property(retain, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(nonatomic) BOOL isWritable; // @synthesize isWritable=_isWritable;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
- (void)encodeWithCoder:(id)arg1;
- (long long)compareTitle:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

