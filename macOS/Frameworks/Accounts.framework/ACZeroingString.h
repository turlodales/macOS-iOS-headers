//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface ACZeroingString : NSString
{
    unsigned short *_characters;
    unsigned long long _length;
}

+ (Class)classForKeyedUnarchiver;
+ (BOOL)supportsSecureCoding;
+ (id)_emptyString;
@property(readonly) unsigned short *characters; // @synthesize characters=_characters;
- (id)_compatibleCopy;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long length;
- (BOOL)_allowsDirectEncoding;
- (Class)classForCoder;
- (id)replacementObjectForCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForKeyedArchiver;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithUTF8String:(const char *)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (id)initWithString:(id)arg1;

@end

