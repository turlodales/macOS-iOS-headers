//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DDPhoneOrMailURI : NSObject
{
    NSString *_value;
    BOOL _isMailScheme;
    BOOL _isHttpScheme;
    BOOL _isFileScheme;
}

+ (id)URIWithString:(id)arg1;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isFile;
- (BOOL)isHttp;
- (BOOL)isPhone;
- (BOOL)isMail;
- (id)initWithString:(id)arg1;

@end

