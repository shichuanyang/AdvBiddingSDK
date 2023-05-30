
Pod::Spec.new do |spec|

  spec.name         = "AdvBiddingSDK"
  spec.version      = "1.1.8"
  spec.summary      = "A short description of AdvBiddingSDK."

  spec.description  = <<-DESC
  bidding 的方法
                   DESC

  spec.homepage     = "https://github.com/shichuanyang/AdvBiddingSDK"


  spec.license      = { :type => 'MIT', :file => 'LICENSE' }



  spec.author             = { "shichuanyang" => "shicy@bayescom.com" }

  spec.ios.deployment_target = '9.0'
  spec.platform     = :ios, "9.0"

  spec.source       = { :git => "https://github.com/shichuanyang/AdvBiddingSDK.git", :tag => spec.version.to_s }

  spec.source_files  = "Classes", "Classes/**/*.{h,m}"
  spec.public_header_files  = "Classes/**/*.h"


  spec.ios.vendored_frameworks = ['Classes/AdvBidding.framework']


  # spec.library   = "iconv"
  # spec.libraries = "iconv", "xml2"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If your library depends on compiler flags you can set them in the xcconfig hash
  #  where they will only apply to your library. If you depend on other Podspecs
  #  you can include multiple dependencies to ensure it works.

  # spec.requires_arc = true

  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # spec.dependency "JSONKit", "~> 1.4"

end
