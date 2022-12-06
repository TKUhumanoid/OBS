
(cl:in-package :asdf)

(defsystem "strategy-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "GetParameter" :depends-on ("_package_GetParameter"))
    (:file "_package_GetParameter" :depends-on ("_package"))
    (:file "example" :depends-on ("_package_example"))
    (:file "_package_example" :depends-on ("_package"))
  ))