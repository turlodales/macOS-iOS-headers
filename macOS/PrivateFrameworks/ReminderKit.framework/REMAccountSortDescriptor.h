//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface REMAccountSortDescriptor : NSObject <NSSecureCoding>
{
    BOOL _ascending;
    long long _type;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 ascending:(BOOL)arg2;

@end

