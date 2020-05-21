//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSExtensionContext, NSUUID;

@interface SFSafariToolbarItem : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_uuid;
    NSExtensionContext *__extensionContext;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSExtensionContext *_extensionContext; // @synthesize _extensionContext=__extensionContext;
- (void)showPopover;
- (void)setLabel:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setBadgeText:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 withBadgeText:(id)arg2;
- (id)_remoteObjectProxy;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSUUID *_uuid;
- (id)_initWithUUID:(id)arg1;

@end

