/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProximityControl.framework/ProximityControl
 */

@interface PCMediaRemoteIdentifier : NSObject <NSSecureCoding> {
    long long  _assetType;
    NSString * _mediaRemoteID;
}

@property (nonatomic) long long assetType;
@property (nonatomic, readonly, copy) NSString *mediaRemoteID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)assetType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mediaRemoteID;
- (void)setAssetType:(long long)arg1;

@end
