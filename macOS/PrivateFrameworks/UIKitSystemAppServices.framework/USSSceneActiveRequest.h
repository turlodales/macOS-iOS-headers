//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface USSSceneActiveRequest : NSObject <NSSecureCoding>
{
    BOOL _isForegroundApp;
    BOOL _isActiveApp;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)sceneActiveRequestForScene:(id)arg1 isForegroundApp:(BOOL)arg2 isActiveApp:(BOOL)arg3;
- (void).cxx_destruct;
@property(nonatomic) BOOL isActiveApp; // @synthesize isActiveApp=_isActiveApp;
@property(nonatomic) BOOL isForegroundApp; // @synthesize isForegroundApp=_isForegroundApp;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initCommon;

@end

